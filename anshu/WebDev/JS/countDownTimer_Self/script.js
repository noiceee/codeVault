const endDate = "16 December 2023 12:00 AM"
const inputs = document.querySelectorAll("input")
const congo = "LessGoooo !!! "
const bday = " HAPPY BRTHDAY !!!"

document.getElementById("end-date").innerText = endDate;

const clock = () => {
    const end = new Date(endDate);
    const now = new Date();

    const diff = (end - now) / 1000;

    // after the clock down ends
    if (diff < 0) {
        document.getElementById("done").innerText = congo;
        document.getElementById("today").innerText = bday;
        return;
    }
    //     console.log(end);
    //     console.log(now);
    inputs[0].value = Math.floor(diff / 3600 / 24);
    inputs[1].value = Math.floor(diff / 3600) % 24;
    inputs[2].value = Math.floor(diff / 60) % 60;
    inputs[3].value = Math.floor(diff) % 60;

}

clock();

setInterval(
    () => {
        clock()
    }, 1000
)