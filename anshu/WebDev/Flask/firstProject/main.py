from flask import Flask, render_template  # flask library has Flask Class
from flask_pymongo import PyMongo

app = Flask(__name__)
app.config["MONGO_URI"] = "mongodb://localhost:27017/myDatabase"
mongo = PyMongo(app)


@app.route("/")  # Main
def home():
    mongo.db.inventory.insert_one({"a": 1})
    return render_template('index.html')


@app.route("/about")  # /anshu
def about():
    myName = "Anshu"
    return render_template('about.html', name=myName)


@app.route("/register")
def register():
    return render_template('about.html')


app.run(debug=True)  # allows instant chnages without reloading
# app.run(debug=True, port=5001)
# static is public
# template is private
