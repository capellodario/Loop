#include <Arduino.h>

#define stepPin 5
#define dirPin 2
#define enPin 8

int customdelay, customdelayMap;
int tempo = 250;
int valutatore = 1000;
int coun;
bool dir = 0;
int del;
int c = 1912;
int cf = 1805;
int d = 1703;
int df = 1607;
int e = 1517;
int f = 1431;
int ff = 1351;
int g = 1275;
int gf = 1203;
int a = 1136;
int af = 1072;
int b = 1012;
int c1 = floor(c / 2);
int cf1 = floor(cf / 2);
int d1 = floor(d / 2);
int df1 = floor(df / 2);
int e1 = floor(e / 2);
int f1 = floor(1431 / 2);
int ff1 = floor(1351 / 2);
int g1 = floor(1275 / 2);
int gf1 = floor(1203 / 2);
int a1 = floor(1136 / 2);
int af1 = floor(1072 / 2);
int b1 = floor(1012 / 2);
int c0 = c * 2;
int cf0 = cf * 2;
int d0 = d * 2;
int df0 = df * 2;
int e0 = e * 2;
int f0 = f * 2;
int ff0 = ff * 2;
int g0 = g * 2;
int gf0 = gf * 2;
int a0 = a * 2;
int af0 = af * 2;
int b0 = b * 2;

int croma = floor(valutatore/8);
int semicroma = floor(valutatore/16);
int semiminima =floor( valutatore/4);
int minima = floor((valutatore/4)*2);
int semibreve = valutatore;

int use = 180;
int oct = 5;

void setup()
{
  Serial.begin(9600);
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(enPin, OUTPUT);
  digitalWrite(enPin, LOW);
}

void note(int num, long dur)
{
  del = floor(num * oct);

  digitalWrite(dirPin, dir);
  coun = floor((dur * 5 * tempo) / del);
  for (int x = 0; x < coun; x++)
  {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(del);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(del);
  }
}

void pa(int durp)
{
  int ker = floor(durp / 100) * tempo;
  delay(ker);
}



void loop(){


  
    

  
    note(d, semiminima);
    note(c, minima);
    note(g, semiminima);
    note(e, minima);
    //
    note(c, semiminima);
    note(b0, minima);
    note(g, semiminima);
    note(e, minima);
    //
    note(b0, semiminima);
    note(a0, minima);
    note(g, semiminima);
    note(e, minima);
    //
    note(d, semiminima);
    note(b0, minima);
    note(g, semiminima);
    note(e, minima);
  
 
 
 
}


