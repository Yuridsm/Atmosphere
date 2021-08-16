#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel {
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideos;

public:
    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void GetInfo() {
        cout << "Name: " << Name << endl;
        cout << "OnwerName: " << OwnerName << endl;
        cout << "Subscribers Count: " << SubscribersCount << endl;
        cout << "Video title: " << endl;

        for (string videoTitle : PublishedVideos)
        {
            cout << videoTitle << endl;
        }
        cout << endl;
    }

    void InsertVideo(string value) {
        PublishedVideos.push_back(value);
    }

    void SeedListOfVideos(int amount) {
        for (int i = 0; i < amount; i++)
        {
            PublishedVideos.push_back("Something...");
        }
    }

    void Subscribe() {
        ++SubscribersCount;
    }

    void Unsubscribe() {
        if (SubscribersCount > 0)
            --SubscribersCount;
    }
};

class CookingYoutubeChannel : public YouTubeChannel {
public:
    CookingYoutubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName) {
    }
};

int main() {
    CookingYoutubeChannel amyChannel("Amy's kitchen", "Amy");
    amyChannel.GetInfo();

    return 0;
}