function findNb(m) {
    var sum=0;
    var n=0;
    while (sum < m) {
    n++;
    sum += Math.pow(n, 3);
  }
    if(sum==m)
    return n;
    return -1;
}
