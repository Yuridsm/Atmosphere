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
    int ContentQuality;

public:
    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
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

    void CheckAnalytics() {
        if(ContentQuality < 5) {
            cout << Name << " has a bad quality content" << endl;
        }
        else {
            cout << Name << " has a great quality content" << endl;
        }
    }
};

class CookingYoutubeChannel : public YouTubeChannel {
public:
    CookingYoutubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName) {
    }

    void Pratice() {
        cout << OwnerName << " is practicing cooking, learning new recipesm, experimenting with spices..." << endl;
        ++ContentQuality;
    }
};

class SingersYoutubeChannel : public YouTubeChannel {
public:
    SingersYoutubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName) {
    }

    void Practice() {
        cout << OwnerName << " is taking singing classes, learning new songs, learning now to dance..." << endl;
        ++ContentQuality;
    }
};

int main() {
    CookingYoutubeChannel amyChannel("Amy's kitchen", "Amy");
    SingersYoutubeChannel charliePuthChannel("Charlie Puth", "Charlie Puth");

    amyChannel.Pratice();
    charliePuthChannel.Practice();
    charliePuthChannel.Practice();
    charliePuthChannel.Practice();
    charliePuthChannel.Practice();
    charliePuthChannel.Practice();
    charliePuthChannel.Practice();
    charliePuthChannel.Practice();
    charliePuthChannel.Practice();
    charliePuthChannel.Practice();
    charliePuthChannel.Practice();
    charliePuthChannel.Practice();

    YouTubeChannel* yt1 = &amyChannel;
    YouTubeChannel* yt2 = &charliePuthChannel; 

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    return 0;
}
