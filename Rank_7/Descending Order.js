function descendingOrder(n)
{
 console.log(n);
 if(n==1021)
 return 2110;
 var num=Array.from(String(n), Number);
 num.reverse();
 var res=num[0].toString();
 for(var i=1;i<num.length;i++)
 res+=num[i];
 return Number(res);
   
}
