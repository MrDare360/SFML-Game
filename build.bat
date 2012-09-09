@ECHO OFF
echo Building Files
g++ -o Game main.cpp Player.h Player.cpp -lsfml-window -lsfml-graphics -lopengl32 -lglu32