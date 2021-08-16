#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel {
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideos;

protected:
    string OwnerName;

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

    void Pratice() {
        cout << OwnerName << " is practicing cooking, learning new recipesm, experimenting with spices..." << endl;
    }
};

int main() {
    CookingYoutubeChannel amyChannel("Amy's kitchen", "Amy");
    amyChannel.InsertVideo("Apple pie");
    amyChannel.InsertVideo("Chocolate cake");
    amyChannel.Subscribe();
    amyChannel.Subscribe();
    amyChannel.GetInfo();
    amyChannel.Pratice();

    return 0;
}