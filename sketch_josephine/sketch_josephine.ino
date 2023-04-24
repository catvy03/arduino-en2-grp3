#define NOTE_A = 27.50
#define NOTE_Bb = 29.14
#define NOTE_B = 30.87
#define NOTE_C = 32.70
#define NOTE_CS = 34.65
#define NOTE_D = 36.71
#define NOTE_Eb = 38.89
#define NOTE_E = 41.20
#define NOTE_F = 43.65
#define NOTE_FS = 46.25
#define NOTE_G = 24.50
#define NOTE_GS = 25.96
#define REST = 0

#define NOTE_A1 = A*2
#define NOTE_A2 = A*4
#define NOTE_Bb1 = Bb*2
#define NOTE_Bb2 = Bb*4
#define NOTE_B1 = B*2
#define NOTE_B2 = B*4
#define NOTE_C1 = C*2
#define NOTE_C2 = C*4
#define NOTE_CS1 = CS*2
#define NOTE_CS2 = CS*4
#define NOTE_D1 = D*2
#define NOTE_D2 = D*4
#define NOTE_Eb1 = Eb*2
#define NOTE_Eb2 = Eb*4
#define NOTE_E1 = E*2
#define NOTE_E2 = E*4
#define NOTE_F1 = F*2
#define NOTE_F2 = F*4
#define NOTE_FS1 = FS*2
#define NOTE_FS2 = FS*4
#define NOTE_G1 = G*2
#define NOTE_G2 = G*4
#define NOTE_GS1 = GS*2
#define NOTE_GS2 = GS*4

int output = 13;

int tempo = 112; 


int melody () = {
  REST, 8, NOTE_E, 8, NOTE_G1, 8, NOTE_C1, 8, NOTE_D1, 8, NOTE_Eb1, 8, NOTE_E1, 4, 
  NOTE_C1, 4, NOTE_A1, 4, NOTE_Eb1, 4, NOTE_D1, 4, 
  NOTE_C1, 4, NOTE_G1, 4, NOTE_FS, 4, NOTE_F1, -4,
  NOTE_E, 2, NOTE_C, 4, NOTE_Eb, 2, NOTE_B, 4, 
  NOTE_D, 2, NOTE_Bb, 4, NOTE_Eb, 2, NOTE_B, 4, 
  NOTE_E, 2, NOTE_C, 4, NOTE_Eb, 2, NOTE_B, 4,  
  NOTE_D, 2, NOTE_Bb, 4, NOTE_Eb, 2, NOTE_B, 4,
  NOTE_E, 8, NOTE_G1, 4, NOTE_E, 8, NOTE_A1, 4, NOTE_G1, 8, 
  NOTE_E, -4, REST, 4, REST, 2, 
  REST, 8, NOTE_A1, 8, NOTE_C1, 8, NOTE_A1, 8, NOTE_C1, 4, NOTE_A1, 8, NOTE_G, -4,
  REST, 4, REST, 2, 
  REST, 8, NOTE_A1, 8, NOTE_F, 8, NOTE_G1, 4, NOTE_C, -4, 
  REST, 8, NOTE_B1, 8, NOTE_B1, 8, NOTE_C1, 4, NOTE_A1, 8, NOTE_G1, 4, NOTE_C1, 4,
  NOTE_G1, 8, NOTE_A1, 4, NOTE_E, 8, NOTE_C, 8, NOTE_E, 4,
  NOTE_E, 4, NOTE_E, -4, REST, -4,
  NOTE_A1, 8, NOTE_B1, 8, NOTE_D1, 8, NOTE_C1, 8, NOTE_G1, 8, NOTE_E, 8, NOTE_C, 8,
  NOTE_Eb, 8, NOTE_E, 4, NOTE_C, 4, NOTE_A1, 4, NOTE_C1, -4,
  NOTE_A1, 8, NOTE_G1, 8, NOTE_E, 8, NOTE_C, 4, NOTE_E, -4,
  REST, -4, NOTE_C1, 4, NOTE_C1, -4,
  NOTE_A1, 8, NOTE_G1, 8, NOTE_C1, 4, NOTE_A1, 8, NOTE_A1, -4,

};

int notes = sizeof(melody) / sizeof(melody[0]) / 2;

int wholenote = (60000 * 4) / tempo;

int divider = 0, notedurations = 0;

void setup() {
  for (int NOTE = 0; NOTE < melody * 2; NOTE = NOTE + 2) {

    divider = melody[NOTE + 1];
    if (divider > 0) {
      notedurations = (whole) / divider;
    } 
    else if (divider < 0) {
      notedurations = (4) / abs(divider);
      notedurations *= 1.5;
    }
    tone(output, melody[thisNote], notedurations*0.9);

    delay(notedurations);
    
    noTone(output);
  }
}

void loop() {

}