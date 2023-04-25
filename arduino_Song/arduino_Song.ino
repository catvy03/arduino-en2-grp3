
/*
Notes chart:
  C     C#     D     Eb   E     F     F#    G     G#    A     Bb    B
0 16.35 17.32 18.35 19.45 20.60 21.83 23.12 24.50 25.96 27.50 29.14 30.87
1 32.70 34.65 36.71 38.89 41.20 43.65 46.25 49.00 51.91 55.00 58.27 61.74
2 65.41 69.30 73.42 77.78 82.41 87.31 92.50 98.00 103.8 110.0 116.5 123.5
3 130.8 138.6 146.8 155.6 164.8 174.6 185.0 196.0 207.7 220.0 233.1 246.9
4 261.6 277.2 293.7 311.1 329.6 349.2 370.0 392.0 415.3 440.0 466.2 493.9
5 523.3 554.4 587.3 622.3 659.3 698.5 740.0 784.0 830.6 880.0 932.3 987.8
6 1047  1109  1175  1245  1319  1397  1480  1568  1661  1760  1865  1976
7 2093  2217  2349  2489  2637  2794  2960  3136  3322  3520  3729  3951
8 4186  4435  4699  4978  5274  5588  5920  6272  6645  7040  7459  7902
*/
//outputs
int output = 13;
//tempo
int maintempo = 8576;
int tempo = 0.25 * maintempo;
//timings
int whole = tempo;
int half = tempo / 2;
int quarter = tempo / 4;
int eighth = tempo / 8;
int sixteenth = tempo / 16;
int dothalf = 1.5 * half;
int dotquarter = 1.5 * quarter;
int doteighth = 1.5 * eighth;
int dotsixteenth = 1.5 * sixteenth;
int smallbreak = 200;
int tripletbreak = eighth / 3;
int halfsixteenth = sixteenth / 2;

//frequencies/notes
int C4 = 262;
int C5 = 523;
int D4 = 194;
int D5 = 587;
int E4 = 330;
int E5 = 659;
int F4 = 349;
int F5 = 699;
int G4 = 392;
int G5 = 784;
int a4 = 440;
int a5 = 880;
int B4 = 494;
int B5 = 988;

void setup() {
for (int i = 0; i< 3; i++){} 
//measure 39
//triplet
  tone(output, B4);
    delay(eighth);
  noTone(output);
    delay(tripletbreak);
  tone(output, B4);
    delay(eighth);
  noTone(output);
    delay(tripletbreak);
  tone(output, B4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
//triplet
  tone(output, B4);
    delay(eighth);
  noTone(output);
    delay(tripletbreak);
  tone(output, B4);
    delay(eighth);
  noTone(output);
    delay(tripletbreak);
  tone(output, B4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);    
//eighth note
  tone(output, B4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
//dotted quarter note
  tone(output, B4);
    delay(dotquarter);
  noTone(output);
    delay(smallbreak);
//quarter rest
  noTone(output);
    delay(quarter);

//measure 40
//triplet
  tone(output, a4);
    delay(eighth);
  noTone(output);
    delay(tripletbreak);
  tone(output, a4);
    delay(eighth);
  noTone(output);
    delay(tripletbreak);
  tone(output, a4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
//quarter note
  tone(output, a4);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
//double sixteenth and quarter
  tone(output, a4);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
  tone(output, a4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);

//measure 41
  tone(output, a4);
    delay(quarter);
//quarter rest and eighth rest 
  noTone(output);
    delay(quarter);
  noTone(output);
    delay(eighth);
//quarter note
  tone(output, a4);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
//eighth note
  tone(output, a4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);

//measure 42
//eighth rest
  noTone(output);
    delay(eighth);
//eighth note
  tone(output, B4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
//double sixteenth
  tone(output, B4);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
  tone(output, B4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
//dotted quarter note
  tone(output, B4);
    delay(dotquarter);
  noTone(output);
    delay(smallbreak);
//eighth note
  tone(output, B4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);

//measure 43
//quarter note
  tone(output, B4);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
//double sixteenth
  tone(output, B4);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
  tone(output, B4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
//triplet
  tone(output, B4);
    delay(eighth);
  noTone(output);
    delay(tripletbreak);
  tone(output, a4);
    delay(eighth);
  noTone(output);
    delay(tripletbreak);
  tone(output, G4);
    delay(eighth);
  noTone(output);
    delay(tripletbreak);
//double sixteenth
  tone(output, G4);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
  tone(output, G4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);

//measure 44
//eighth note
  tone(output, a4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
//quarter note
  tone(output, G4);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
//eight note and quarter note
  tone(output, a4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
  tone(output, a4);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
//eighth rest
  noTone(output);
    delay(eighth);
//eighth note
  tone(output, E4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
  
//measure 45
//eighth note
  tone(output, F4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
//quarter note
  tone(output, E4);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
//double eighth note
  tone(output, D4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
  tone(output, D4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
//dotted quarter note
  tone(output, F4);
    delay(dotquarter);
  noTone(output);
    delay(smallbreak);

//measure 46
//eighth rest
  noTone(output);
    delay(eighth);
//eighth note
   tone(output, F4);
    delay(eighth);
  noTone(output);
    delay(smallbreak); 
//double sixteenth
 tone(output, G4);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
  tone(output, G4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
//quarter note
  tone(output, a4);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
//double sixteenth and quarter
 tone(output, G4);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
  tone(output, C4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);

//measure 47
  tone(output, C4);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
//two quarter rest and eighth rest
  noTone(output);
    delay(quarter);
  noTone(output);
    delay(quarter);
  noTone(output);
    delay(eighth);
//eighth note
  tone(output, C4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);

//measure 48
//eighth note
  tone(output, a4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
//quarter note
  tone(output, C5);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
//eighth note
  tone(output, a4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
//quarter note
  tone(output, C5);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
//double sixteenth and quarter
 tone(output, a4);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
  tone(output, G4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);

//measure 49
  tone(output, G4);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
//quarter rest
  noTone(output);
    delay(quarter);
//half rest
  noTone(output);
    delay(half);

//measure 50
//eighth rest
  noTone(output);
    delay(eighth);
//eighth note
  tone(output, a4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
//double sixteenth 
 tone(output, C5);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
  tone(output, a4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
//quarter note
  tone(output, C5);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
//double sixteenth
 tone(output, C5);
    delay(quarter);
  noTone(output);
    delay(smallbreak);
  tone(output, a4);
    delay(eighth);
  noTone(output);
    delay(smallbreak);
}
void loop() {
  // put your main code here, to run repeatedly:

}
