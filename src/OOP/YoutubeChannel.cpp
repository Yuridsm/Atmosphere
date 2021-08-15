#include <iostream>
#include <list>

using namespace std;


class YouTubeChannel {
    public:
        string Name;
        string OwnerName;
        int SubscribersCount;
        list<string> PublishedVideos;
};

int main() {
    
    YouTubeChannel ytChannel;
    ytChannel.Name = "Yuri Melo";
    ytChannel.OwnerName = "Yuri Melo";
    ytChannel.SubscribersCount = 15;
    ytChannel.PublishedVideos = { 
        "01. Gettings Started with C++ Part I",
        "02. Gettings Started with C++ Part II",
        "03. Gettings Started with C++ Part III"
    };

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OnwerName: " << ytChannel.OwnerName << endl;
    cout << "Subscribers Count: " << ytChannel.SubscribersCount << endl;
    cout << "Video title: " << endl;

    for(string videoTitle: ytChannel.PublishedVideos) {
        cout << videoTitle << endl;
    }
}