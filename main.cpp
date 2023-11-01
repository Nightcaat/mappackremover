#include <Geode/Geode.hpp>
#include <Geode/modify/CreatorLayer.hpp>

using namespace geode::prelude;



 
class $modify(Ohio, CreatorLayer) {
   
    

    bool init() {
        if (!CreatorLayer::init()) return false;

        auto menu = this->getChildByID("creator-buttons-menu");
        
        auto mappacks = menu->getChildByID("map-packs-button");
        
        menu->removeChild(mappacks);
        menu->updateLayout();

        return true;
    }
};







    





        
