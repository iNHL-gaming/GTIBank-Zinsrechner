// GTIBankZinsrechner.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <cmath>
#include <Windows.h>

HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
void fontsize(int, int);
void fontsize(int a, int b) {
    PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx = new CONSOLE_FONT_INFOEX();
    lpConsoleCurrentFontEx->cbSize = sizeof(CONSOLE_FONT_INFOEX);
    GetCurrentConsoleFontEx(out, 0, lpConsoleCurrentFontEx);
    lpConsoleCurrentFontEx->dwFontSize.X = a;
    lpConsoleCurrentFontEx->dwFontSize.Y = b;
    SetCurrentConsoleFontEx(out, 0, lpConsoleCurrentFontEx);
}

int main()
{
    std::cout << "Copyright YukiHai! GitHub.com/inhl-gaming\n";
    
 while (true) {
     fontsize(10, 18);
     std::cout << "GTI-Bank Zins Rechner made by YukiHai!\n";
     std::cout << "\n";
        int einzug;
        float wert;
        int laufzeit;


        std::cout << "Bitte gebe die Laufzeit ein: \n";
        std::cin >> laufzeit;

        std::cout << "\n";

        std::cout << "Bitt gebe die Einzahlungsquote ein: \n";
        std::cin >> einzug;
        std::cout << "\n";
        wert = 0;
        wert = einzug;
        int zins;
        int i;
        int a;
        
        for (i = 1; i <= laufzeit; i++) {

            zins = wert * 0.02;

            a = zins + wert;

            wert = a;

            HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

            std::cout << "Nach dem " << i << ". Monat kriegt die Person >> ";
            SetConsoleTextAttribute(color, 10);
            std::cout << a << "\n";
            SetConsoleTextAttribute(color, 7);



        }
        Sleep(10);
        std::cout << "Um ein neue Berechnung zu machen Druecke <Enter>. Um das Programm zu schliessen Druecke <STRG + C> \n";
        system("pause");
        std::cin.get();
        system("cls");
    }

}



// Programm ausführen: STRG+F5 oder "Debuggen" > Menü "Ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
