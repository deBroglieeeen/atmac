const compoundInterest = (a,r,n) => {
  if(n === 0) {
    return a;
  } else {
    return compoundInterest(a * (1 + r), r , n - 1);
  }
};

//console.log(compoundInterest(1000000, 0.001, 29));
