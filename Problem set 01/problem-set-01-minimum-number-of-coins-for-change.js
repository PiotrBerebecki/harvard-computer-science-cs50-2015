console.clear();

/*
-----------------------------------------
Minimum number of coins for change
(aka Time for change)
-----------------------------------------

A greedy algorithm is one "that always takes the best immediate, or local, 
solution while finding an answer.

Write a program that first asks the user how much change is owed and then 
spits out the minimum number of coins with which said change can be made.

Assume that the only coins available are 
quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢).
*/



// --------------------------------------
function greedy(change) {
  
  var coins = [0.25, 0.10, 0.05, 0.01];
  var changeOwed = change;
  var count = 0;
  
  for (var i = 0; i < coins.length; i++) {  
    while (changeOwed >= coins[i]) {
      changeOwed = Math.round((changeOwed - coins[i]) * 100) / 100 ;
      count++;      
    }
  }
  
  return count;
  
}

console.log(  greedy(0.32)  ); // 4



// --------------------------------------
// As above but with a prompt
function greedy2() {
  
  var changeOwed;
  
  do {
    changeOwed = prompt('How much change is owed?');
  } while (changeOwed < 0.01);
  
  var coins = [0.25, 0.10, 0.05, 0.01];
  var count = 0;
  
  for (var i = 0; i < coins.length; i++) {  
    while (changeOwed >= coins[i]) {
      changeOwed = Math.round((changeOwed - coins[i]) * 100) / 100;
      count++;
    }
  }
  
  return count;
  
}

// console.log(  greedy2()  );