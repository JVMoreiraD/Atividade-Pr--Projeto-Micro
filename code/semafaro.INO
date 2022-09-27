// Aqui definimos os valores para cada conector do LED
#define RED 2;
#define YELLOW 4;
#define GREEN 5;

// Aqui setamos o modo do pin de cada LED
void setup()
{
    pinMode(RED, OUTPUT);
    pinMode(YELLOW, OUTPUT);
    pinMode(GREEN, OUTPUT);
}

// Aqui fazemos um loop aonde alternamos os valores de cada LED
void loop()
{
    digitalWrite(RED, HIGH);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, LOW);
    delay(1000);
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, HIGH);
    digitalWrite(GREEN, LOW);
    delay(1000);
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, HIGH);
    delay(1000);
}