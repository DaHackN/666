program Da1_10;
var v1, v2, t1, t2, vo, to :real;
begin
 writeln('������ ���祭�� ��� ���� ��ꥬ�� � ⥬������');
 read(v1,v2,t1,t2);
 vo:=v1+v2;
 to:=(v1*t1+v2*t2)/vo;
 writeln('��騩 ���� = ',vo:4:2,' ','���� ⥬������ = ',to:4:2);
 readln();
end.