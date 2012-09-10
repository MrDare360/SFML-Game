@ECHO OFF
echo Building Files
g++ -o Game main.cpp Player.h Player.cpp Enemy.h Enemy.cpp -lsfml-window -lsfml-graphics -lopengl32 -lglu32