console.log("This is tut 48");

// Till now we have already studied 
//1.Basic functions
//2.Metacharacter symbols

// let regex=/^h/i;


//3.Character sets  --we use []

let regex=/h[atz]rry/;  //can be a,t and z
 regex=/h[a-z]rry/;  // can be any character from a to z 
 regex=/h[^atz]rry/;  //cannot be a,t and z
 regex=/h[^atz]rr[yYu]/;  //cannot be any of  a,t or z + can be y,Y or u

 regex=/h[a-zA-z]rr[yu0-9][0-9]/ //we can have as many character sets as we want

 //Quantifiers--we use {}

 regex=/har{2}y/;  //r can occur exactly 2 times
 regex=/har{0,2}y/;  //r can occur exactly 2 times

//  Groupings  -we use paranthesis for groupings ()

regex=/(har){2}([0-9]){3}/;

// const str="hirr81 bhai";
const str="harhar134ry bhai harry";

console.log(regex.exec(str));




if(regex.test(str)){
    console.log(`${regex.source} is matching with the ${str}`);
}
else{
    console.log(`${regex.source} is not matching with the ${str}`);
}