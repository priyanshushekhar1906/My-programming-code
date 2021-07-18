console.log('Tutorial 37 call back');
let students=[{name:"rishu",subject:"Maths"},
              {name:"aryan",subject:"English"}];

function enrollstudent(student,callback)
{
   setTimeout(()=>{
       students.push(student);
       console.log("Student has been enrolled");
       callback();
   },3000);

}
function getData(){
    let str="";
    setTimeout(()=>{
        students.forEach((student)=>{
            
            str+=`<li>${student.name}</li>`;
            document.getElementById('student').innerHTML=str;
            // console.log(student.name);
            console.log("students have been fetched");
        })
        
    },1000);

}
let newStudent={name:"Priyanshu",subject:"physics"};
enrollstudent(newStudent,getData);
// getData();