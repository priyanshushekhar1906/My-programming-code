console.log("This is tut10");
function greeting(name,greet="Are you okay?")
{
    console.log(greet +" "+`${name}`);
    return name +" Replied "+greet;
};
greet="Good Morning";
let val=greeting("harry");
greeting("chotu",greet);
console.log(val);

const call=function(freind){

    console.log("Hello "+freind);
}
call("Rishu");

const myobj={
    name:"Chotu",
    game:function(){
        return "PUBG";
    }
};
console.log(myobj.game());

arr=["fruit","Vegetables","Furniture"];
arr.forEach(function(element,index) {
    console.log(element,index);
}); 