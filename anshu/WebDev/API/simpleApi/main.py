# other imports statement at the top
from fastapi import FastAPI, Depends
from pydantic import BaseModel

from fastapi.security import OAuth2PasswordBearer
app = FastAPI()
# setup authentication scheme
oauth2_scheme = OAuth2PasswordBearer(tokenUrl="login")


class UserSchema(BaseModel):
    username: str
    password: str


@app.get("/profile/{id}", response_model=UserSchema)
def profile(id: int, session: Session = Depends(get_db)):
    """Processes request to retrieve user
    profile by id
    """
    return user_db_services.get_user_by_id(session=session, id=id)

# other functions and import statements above


def get_user_by_id(session: Session, id: int):
    return session.query(User).filter(User.id == id).one()
