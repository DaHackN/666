Program dahackn1_9;
var a,b,c,s,d:real;

begin
 writeln('dve storony i ygol');
 read(b,d,a);
 c:=sqrt(sqr(b)+sqr(d)-2*d*b*cos(a));
 s:=abs(0.5*b*d*sin(a));
 writeln(c:4:2);
 writeln(s:4:2);
 readln();
end.
