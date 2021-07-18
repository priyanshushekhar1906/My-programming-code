// Promise:Best video on Promises
// -resolve
// -reject
// --Pending
console.log("Tutorial 39");

function func1(){
    return new Promise(function(resolve,reject){
        setTimeout(()=>{
            const error =true;
            if(!error)
            {
                console.log("Function: Your Promise has been resolved");
                resolve();
            }
            else{
                console.log("Function: Your Promise has not been resolved");
                reject("sorry not fulfilled");
            }

        },2000)

    });
}
func1().then(function()
{
    console.log("Harry: Thanks fo r resolving");
}).catch(function(error){
    console.log("Harry: very bad bro "+error);
});

// function inside then is ran as --resolve()
// function inside catch is ran as --reject()