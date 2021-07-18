console.log("Tutorial 43");

async function harry(){
    console.log("Inside harry function");
    const response=await fetch('https://api.github.com/users');
    console.log("Before Response")
    const users =await response.json();
    console.log("Users resolved")
    return users;
}

console.log("Before Calling harry");
let a=harry();
console.log("After Calling harry");
console.log(a);
a.then((data)=>{
    console.log(data);

})
console.log("Last line of js file");