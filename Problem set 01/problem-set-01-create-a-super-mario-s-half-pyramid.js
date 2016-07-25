console.clear();

/*
-----------------------------------------
Create a Super Mario's half pyramid
-----------------------------------------

Write a function that creates a Super Mario half-pyramid of a given height.

Example:

createHalfPyramid(8) // returns a half pyramid which consist of 8 rows.
The first row has always two hashes.

       ##
      ###
     ####
    #####
   ######
  #######
 ########
#########

Take care to align the bottom-left corner of your half-pyramid with 
the left-hand edge of your terminal window.
*/



// --------------------------------------
function createHalfPyramid(height) {
  for (var i = 0; i < height; i++) {
    console.log('.'.repeat(height - i - 1) + '#'.repeat(i + 2));
  }
}

console.log(  createHalfPyramid(8)  );



// --------------------------------------
// As above but with the prompt
function createHalfPyramid2() {
  var height;
  
  do {
    height = prompt('Please enter the height of the Super Mario\'s half pyramid', 'Enter a number from 1 up to 25.');
  } while (isNaN(height) || height < 1 || height > 25);
  
  for (var i = 0; i < height; i++) {
    console.log('.'.repeat(height - i - 1) + '#'.repeat(i + 2));
  }  
}

// console.log(  createHalfPyramid2()  );



// --------------------------------------
// An alternative approach
function createHalfPyramid3(height) {
  var hashes = '#';
  var spaces = '.'.repeat(height);
  
  for (var i = 0; i < height; i++) {
    hashes += '#';
    spaces = spaces.slice(0,-1);
    console.log(spaces + hashes);
  }
}

// console.log(  createHalfPyramid3(8)  );