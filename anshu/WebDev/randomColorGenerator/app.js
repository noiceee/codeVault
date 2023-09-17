const getColor = () => {
    // Hex Code , color code is in hexdecimal form
    const randomNumber = Math.floor(Math.random() * 16777215)
    const randomCode = "#" + randomNumber.toString(16);
    document.body.style.backgroundColor = randomCode;
}


//event call
document.getElementById("btn").addEventListener(
        "click", getColor
    )
    //init call
getColor();