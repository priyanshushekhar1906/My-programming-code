console.log("This is tutorial 18");
// let btn=document.getElementById('btn');
// btn.addEventListener('click',func1);
// btn.addEventListener('dblclick',func2);
// btn.addEventListener('mousedown',func3);
// btn.addEventListener('mousedown',func3);

// function func1(e)
// {
//     // console.log("Thanks",e);
//     e.preventDefault();  //form k under button ki default value submit hoti hai usse bachne k liye yeh use krenge
// }
// function func2(e)
// {
//     console.log("Thanks It's a double click",e);
//     e.preventDefault();  //form k under button ki default value submit hoti hai usse bachne k liye yeh use krenge
// }
// function func3(e)
// {
//     console.log("Thanks It's a mouse down",e);
//     e.preventDefault();  //form k under button ki default value submit hoti hai usse bachne k liye yeh use krenge
// }
// document.querySelector('.no').addEventListener("mouseenter",function()
// {
//     console.log("You enter a no");
// });
// document.querySelector('.no').addEventListener("mouseleave",function()
// {
//     console.log("You leave a no");
// });
// document.querySelector('.container').addEventListener("mousemove",function(e)
document.querySelector('.container').addEventListener("mousemove",function(e)
{
    console.log(e.offsetX,e.offsetY);
    // document.body.style.backgroundColor='red';
    document.body.style.backgroundColor=`rgb(${e.offsetX},${e.offsetY},154)`;
    console.log("You move a mouse in container");
});


