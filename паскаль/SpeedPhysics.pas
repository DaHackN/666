program speedPhysics;
var v1,vo,v2,t,l:real;
begin
 writeln('������ ���祭�� ��� ᪮��� 1, �६��� � ����ﭨ�, �⮡� ���� ᪮���� 2');
 read(v1,t,l);
 vo:=l/t;
 vo2:=vo*3600/1000;
 v2:=v1-vo;
 writeln('������� 2 ࠢ�� ',v2:4:2);
 readln();
end.