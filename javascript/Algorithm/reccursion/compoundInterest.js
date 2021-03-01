const compoundInterest = (a,r,n) => {
  if(n === 0) {
    return a;
  } else {
    return compoundInterest(a * (1 + r), r, n - 1);
  }
};

const compoundRevised = (a,r,n) => {
  if(n === 0) {
    return a;
  } else {
    return compoundRevised(a, r, n - 1) * (1 + r);
  }
};


console.log(compoundInterest(1000000, 0.001, 29));

console.log(compoundRevised(1000000, 0.001, 29));
