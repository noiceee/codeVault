from flask import Flask, render_template, request
from flask_pymongo import PyMongo

app = Flask(__name__)
app.config["MONGO_URI"] = "mongodb://localhost:27017/userData"
mongodb_client = PyMongo(app)
db = mongodb_client.db


@app.route("/", methods=["GET", "POST"])
def registration():
    print(request)
    collection = db['details']
    form_data = {
        'fname': request.form.get('fname'),
        'lname': request.form.get('lname'),
        'username': request.form.get('username'),
        'email': request.form.get('email')
    }

    db.collection.insert_one(form_data)
    return render_template("form.html")


@app.route("/about", methods=["GET", "POST"])
def about():
    # fname = db.collection.find({fname: 'fname'})
    # lname = db.collection.find({fname: 'lname'})
    return render_template("about.html", fname='fname', lname="lname")


app.run(debug=True)
