Program dahackn1_2;
var A,B:real;

begin
 writeln('Enter number for A and B');
 read(A,B);
 A:= A + B;
 B:= A - B;
 A:= A - B;
 writeln('A = ',A:4:2,' ','B = ',B:4:2);
 readln();
end.
