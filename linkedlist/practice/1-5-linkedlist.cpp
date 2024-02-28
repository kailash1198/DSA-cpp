#include <iostream>
using namespace std;
class song
{
public:
    int click;
    song *nextSong;
    song(int userClick)
    {
        click = userClick;
        nextSong = NULL;
    }
};

class playList
{
private:
    song *firstSong;
    song *lastSong;

public:
    playList()
    {
        firstSong = NULL;
        lastSong = NULL;
    }

    void musicAdding(int musicNum)
    {
        song *newMusic = new song(musicNum);

        if (firstSong == NULL)
        {
            firstSong = newMusic;
            lastSong = newMusic;
        }
        else
        {
            lastSong->nextSong = newMusic;
            lastSong = newMusic;
        }
    }
};

int main(void)
{
    int music;
    playList listOne;

    cout << "Please add music: ";
    cin >> music;
    listOne.musicAdding(music);
   
}