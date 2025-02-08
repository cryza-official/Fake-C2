#include <windows.h>
#include <iostream>

using namespace std;

const string interface1 = R"( 
                               ╔═╗  ╦═╗  ╦ ╦  ═╗ ╦  ╔═╗
                               ║    ╠╦╝  ╚╦╝  ╔╩╦╝  ╠═╣
                               ╚═╝  ╩╚═   ╩   ╩ ╚═  ╩ ╩
                          ╚════╦═══════════════════════╦════╝         
                    ║═══════════════════════════════════════════║        
                    ║      bienvenue sur c2   C R Y X A         ║
                    ║═══════════════════════════════════════════║  
     ║════════════════════════════════════════════════════════════════════════║
     ║  methods l7 - l4 dstat no liste noir vous pouvé testé la puissance     ║
     ║════════════════════════════════════════════════════════════════════════║
     ║════════════════════════════════════════════════════════════════════════║
     ║  methods l7 - l4 dstat no liste noir vous pouvé testé la puissance     ║
     ║════════════════════════════════════════════════════════════════════════║
             ╔═══════════╩══════════════════════════════╩═════════╗
             ║ - - - - - - - - Copyright @ 2022 cryxa - - - - - - ║
             ║ - - -Please Type [HELP] To view Alle Commands- - - ║
             ║     et sutout pas de abus avec ninporte qui merci  ║
             ╚════════════════════════════════════════════════════╝)";
const string interface2 = R"( .
.
.
   
                         ╔═╗  ╦═╗  ╦ ╦  ═╗ ╦  ╔═╗
                         ║    ╠╦╝  ╚╦╝  ╔╩╦╝  ╠═╣
                         ╚═╝  ╩╚═   ╩   ╩ ╚═  ╩ ╩
                      ╚════╦════════════════════════╦════╝    
                  ╔════════╩════════════════════════╩════════╗
                  ║  METHODS > LISTS OUR METHODS             ║  
                  ║  CHAT > ENTERSTHE PLUBLIC CHAT ROOM      ║
                  ║  ATTACK > ATTACK THE IPV4/IPV7           ║
                  ║  RULES > LISTS OUR TOS / RULES           ║
                  ║  PLAN > LISTS YOUR INFO                  ║
                  ║  TOOLS > LIST THE TOOLS                  ║
                  ║  CLEAR > CLEAR YOUR TERMINAL             ║
                  ║  CLS > CLOSE THE SESSION                 ║
                  ╚══════════════════════════════════════════╝)";
const string interface3 = R"(
                             ╔╦╗╔═╗╔╦╗╦ ╦╔═╗╔╦╗╔═╗
                             ║║║║╣  ║ ╠═╣║ ║ ║║╚═╗   
                             ╩ ╩╚═╝ ╩ ╩ ╩╚═╝═╩╝╚═╝
                     ╔══════════════════════════════════╗                            
             ╔═══════╩═══╗╔═══════════╗╔═══════════╗╔═══╩═══════╗
             ║ RAIL      ║║ OVH-NUKE  ║║ OVH-ANGEL ║║ FIVEM     ║
             ║ LDAP      ╠╣ OVH-VITAL ╠╣ OVH-FAITH ╠╣ SSH       ║
             ║ HOLD      ║║ OVH-YUIV2 ║║ OVH-RAPE  ║║ ROBLOX    ║
             ╚═════╦═════╝╚═════╦═════╝╚═════╦═════╝╚═════╦═════╝
             ╔═════╩═════╗╔═════╩═════╗╔═════╩═════╗╔═════╩═════╗
             ║ 100UP     ║║ NFO-STUN  ║║ SYN-AMPE  ║║ LAYER7    ║
             ║ CHAOS     ╠╣ NFO-FRAG  ╠╣ AMPBYPASS ╠╣ UDP-XV    ║
             ║ HYDRA     ║║ NFO-PORT  ║║ MULTISSYN ║║ DNS-C2    ║
             ╚═════╦═════╝╚═════╦═════╝╚═════╦═════╝╚═════╦═════╝ 
             ╔═════╩═════╗╔═════╩═════╗╔═════╩═════╗╔═════╩═════╗  
             ║ GAME-SLAP ║║ 100UP-CPU ║║ HTTPS-SEC ║║ OVH-UDP   ║   
             ║ XFORTNITE ╠╣ NTP-SMOKE ╠╣ HTTPS-RAW ╠╣ NTP-XV    ║
             ║ TRUMP-SEC ║║ HOME-CLAP ║║ HTTPS-QUE ║║ VSE-C2    ║
             ╚═══════════╝╚═══════════╝╚═══════════╝╚═══════════╝  )";

const string interface4 = R"( 
 ╔═╗  ╦═╗  ╦ ╦  ═╗ ╦  ╔═╗
 ║    ╠╦╝  ╚╦╝  ╔╩╦╝  ╠═╣
 ╚═╝  ╩╚═   ╩   ╩ ╚═  ╩ ╩

Username : [cryxa-admin]
Admin : [cryxa-admin]
Resellert : [True}
VIP : [True]
Banned : [ 8 ]

Days Left : [illimited] 
Cooldown : [1]
Concurrents : [4]
Max sessions : [123]

Current Running Attacks globally : [1]
Attacks Sent By Exit : [89])";

void polo1(const string& coucou) {
    cout << coucou << endl;
}

void config() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
}

int main() {
    string input;
    config();

    while(true) {
        cout << "votre commande :";
        cin >> input;

        if(input == "home"){
            polo1(interface1);
        } else if (input == "help") {
            polo1(interface2);
        } else if (input == "methods") {
            polo1(interface3);
        } else if (input == "rules") {
            polo1(interface4);
        } else {
            cout << "commande Not foud 404";
        }
    }

    std::cin.get();
    std::cin.ignore();
    
    return 0;
}