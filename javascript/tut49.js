console.log("This is tutorial49");


// Character classes

let regex = /\wrry/;    //word character- _or aphabet or numbers

regex = /\w+ry/;       // \w+ means one or more word characters
regex = /\Wbhai/;     //Non word characters

regex = /\W+/;         // \W+ means more than one non word characters

regex = /no \d999/   // \d means digit
regex = /no \d+/   // \d+ means more than one  digit
regex = /\D999/   // \D means  non digit
regex = /\D+999/   // \D+  means more than one  non digit

regex=/\ska no9/;  //Match white space characters
regex=/\s+ka no9/;  //\s+ means one or More than one  white space characters
regex=/\Ska no9/;  // one non white space characters
regex=/\S+ka no9/;  //One or  more than one non white space characters

regex=/rry\b/;  //word boundary

//Assertions

regex=/h(?=a)/;  // h k  baad exactly a hona chahiye str me
regex=/h(?!y)/;   // h k baad exactly y nhi  hona chahiye str me


const str = "ha harryk*!@&#bhai  harryka no9 harry999685 85";




console.log(regex.exec(str))

if (regex.test(str)) {
    console.log(`${regex.source} is matching with the ${str}`);
}
else {
    console.log(`${regex.source} is not matching with the ${str}`);
}