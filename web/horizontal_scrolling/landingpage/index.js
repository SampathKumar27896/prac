//DOM Elements

const time = document.getElementById('time'),
    greeting = document.getElementById('greeting'),
    name = document.getElementById('name'),
    focus = document.getElementById('focus');

//Function to show time 

function showTime() {
    let today = new Date(),
        hour = today.getHours(),
        min = today.getMinutes(),
        sec = today.getSeconds();

    //Set AM or PM
    const amPm = hour >= 12 ? 'PM' : 'AM';

    //12 hour format
    hour = hour % 12 || 12;

    //Output the time
    time.innerHTML = `${hour}<span>:</span>${addZero(min)}<span>:</span>${addZero(sec)} ${amPm}`;

    setTimeout(showTime, 1000);
}

//Add Zero
function addZero(n) {
    return (parseInt(n, 10) < 10 ? '0' : '') + n;
}



//Run
showTime();