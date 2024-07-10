#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel{
    private:
        string Name;
        string OwnerName;
        unsigned int SubscriberCount;
        list<string> PublishedVideoTitles;

    public:
        YoutubeChannel(string name, string ownerName){
            Name = name;
            OwnerName = ownerName;
            SubscriberCount = 0;
        }
    
        void GetInfo() {
            cout << "Name: " << Name << endl;
            cout << "Owner Name: " << OwnerName <<endl;
            cout << "Number of Subscribers: " <<SubscriberCount <<endl;
            cout << "Videos: " << endl;

            for (string videoTitle : PublishedVideoTitles){
                cout << videoTitle << endl;
            }
        }

        void Subscribe() {
            SubscriberCount++;
        }

        void Unsubscribe() {
            if (SubscriberCount > 0) SubscriberCount--;
            // if(SubscriberCount > 0) {
            //     SubscriberCount--;
            // }
        }

        string getName() {
            return Name;
        }
        void setName(string newName) {
            Name = newName;
        }
        void PublishVideo(string newVidTitle) {
            PublishedVideoTitles.push_back(newVidTitle);
        }


};

int main() {
    YoutubeChannel ytChannel("Veritasium", "Derek Muller");

    ytChannel.PublishVideo("Entropy: the most misunderstood concept");
    ytChannel.Unsubscribe();
    ytChannel.GetInfo();
    for(int i = 0; i < 20; i++) {
        ytChannel.Subscribe();
    }
    ytChannel.GetInfo();
}