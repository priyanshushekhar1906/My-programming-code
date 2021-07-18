console.log("tutorial 42");
// button with id myBtn
// let myBtn=document.getElementById("myBtn");
// // div with id content
// let content=document.getElementById("content");

function getData(){
    console.log("Started getdata");
    url="Priyanshu.txt";
    fetch(url).then((response)=>{
        console.log("inside first then");
   return response.text();
    }).then((data)=>{
        console.log("inside second then");
        console.log(data);
    })
}
// function getData(){
//     console.log("Started getdata");
//     url="https://api.github.com/users";
//     fetch(url).then((response)=>{
//         console.log("inside first then");
//    return response.json();
//     }).then((data)=>{
//         console.log("inside second then");
//         console.log(data);
//     })
// }
// function postData(){
    
//     url="http://dummy.restapiexample.com/api/v1/create";
//     data='{"name":"P3riyanshu1234485","salary":"1dw23","age":"2323"}';
//     params={
//         method:'post',
//         headers:{
//             'Content-Type':'application/json',
//         },
//         body:data
//     }
//     fetch(url,params).then((response)=>
//     {
//         return response.json();
//     }).then((data)=>{
//         console.log(data);
//     })
// }
// postData();
console.log("Before running getData");

getData();
console.log("After running getData");