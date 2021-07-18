console.log("This is tutorial 17 on events");
document.getElementById('heading').addEventListener('click', function (e) {
    let variable = e.target;
    variable = e.target.className;
    variable = Array.from(e.target.classList);
    variable=e.offsetX;
    variable=e.offsetY;
    variable=e.clientX;
    variable=e.clientY;

    //  variable=e.target.id;
    console.log("you have clicked heading");
    // location.href='//codewithharry.com'
    console.log(variable); //e event object

});
