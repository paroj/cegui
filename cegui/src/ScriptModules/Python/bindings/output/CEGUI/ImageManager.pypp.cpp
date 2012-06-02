// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "ImageManager.pypp.hpp"

namespace bp = boost::python;

struct ImageManager_wrapper : CEGUI::ImageManager, bp::wrapper< CEGUI::ImageManager > {

    ImageManager_wrapper( )
    : CEGUI::ImageManager( )
      , bp::wrapper< CEGUI::ImageManager >(){
        // null constructor
    
    }

    virtual void text( ::CEGUI::String const & text ) {
        if( bp::override func_text = this->get_override( "text" ) )
            func_text( boost::ref(text) );
        else{
            this->CEGUI::XMLHandler::text( boost::ref(text) );
        }
    }
    
    void default_text( ::CEGUI::String const & text ) {
        CEGUI::XMLHandler::text( boost::ref(text) );
    }

};

void register_ImageManager_class(){

    { //::CEGUI::ImageManager
        typedef bp::class_< ImageManager_wrapper, bp::bases< CEGUI::Singleton< CEGUI::ImageManager > >, boost::noncopyable > ImageManager_exposer_t;
        ImageManager_exposer_t ImageManager_exposer = ImageManager_exposer_t( "ImageManager", bp::init< >() );
        bp::scope ImageManager_scope( ImageManager_exposer );
        { //::CEGUI::ImageManager::addFromImageFile
        
            typedef void ( ::CEGUI::ImageManager::*addFromImageFile_function_type )( ::CEGUI::String const &,::CEGUI::String const &,::CEGUI::String const & ) ;
            
            ImageManager_exposer.def( 
                "addFromImageFile"
                , addFromImageFile_function_type( &::CEGUI::ImageManager::addFromImageFile )
                , ( bp::arg("name"), bp::arg("filename"), bp::arg("resource_group")="" ) );
        
        }
        { //::CEGUI::ImageManager::create
        
            typedef ::CEGUI::Image & ( ::CEGUI::ImageManager::*create_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            ImageManager_exposer.def( 
                "create"
                , create_function_type( &::CEGUI::ImageManager::create )
                , ( bp::arg("type"), bp::arg("name") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                \n\
                    Create an instance of Image subclass registered for identifier  type\n\
                    using the name  name.\n\
            \n\
                @param type\n\
                    String object describing the identifier of the Image subclass that is to\n\
                    be created.\n\
            \n\
                @param name\n\
                    String object describing the name that the newly created instance will\n\
                    be created with.  This name must be unique within the system. \n\
            \n\
                @exception UnknownObjectException\n\
                    thrown if no Image subclass has been registered using identifier  type.\n\
            \n\
                @exception AlreadyExistsException\n\
                    thrown if an Image instance named  name already exists.\n\
                *\n" );
        
        }
        { //::CEGUI::ImageManager::create
        
            typedef ::CEGUI::Image & ( ::CEGUI::ImageManager::*create_function_type )( ::CEGUI::XMLAttributes const & ) ;
            
            ImageManager_exposer.def( 
                "create"
                , create_function_type( &::CEGUI::ImageManager::create )
                , ( bp::arg("attributes") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::ImageManager::destroy
        
            typedef void ( ::CEGUI::ImageManager::*destroy_function_type )( ::CEGUI::Image & ) ;
            
            ImageManager_exposer.def( 
                "destroy"
                , destroy_function_type( &::CEGUI::ImageManager::destroy )
                , ( bp::arg("image") ) );
        
        }
        { //::CEGUI::ImageManager::destroy
        
            typedef void ( ::CEGUI::ImageManager::*destroy_function_type )( ::CEGUI::String const & ) ;
            
            ImageManager_exposer.def( 
                "destroy"
                , destroy_function_type( &::CEGUI::ImageManager::destroy )
                , ( bp::arg("name") ) );
        
        }
        { //::CEGUI::ImageManager::destroyAll
        
            typedef void ( ::CEGUI::ImageManager::*destroyAll_function_type )(  ) ;
            
            ImageManager_exposer.def( 
                "destroyAll"
                , destroyAll_function_type( &::CEGUI::ImageManager::destroyAll ) );
        
        }
        { //::CEGUI::ImageManager::destroyImageCollection
        
            typedef void ( ::CEGUI::ImageManager::*destroyImageCollection_function_type )( ::CEGUI::String const &,bool const ) ;
            
            ImageManager_exposer.def( 
                "destroyImageCollection"
                , destroyImageCollection_function_type( &::CEGUI::ImageManager::destroyImageCollection )
                , ( bp::arg("prefix"), bp::arg("delete_texture")=(bool const)(true) ) );
        
        }
        { //::CEGUI::ImageManager::get
        
            typedef ::CEGUI::Image & ( ::CEGUI::ImageManager::*get_function_type )( ::CEGUI::String const & ) const;
            
            ImageManager_exposer.def( 
                "get"
                , get_function_type( &::CEGUI::ImageManager::get )
                , ( bp::arg("name") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::ImageManager::getDefaultResourceGroup
        
            typedef ::CEGUI::String const & ( ::CEGUI::ImageManager::*getDefaultResourceGroup_function_type )(  ) const;
            
            ImageManager_exposer.def( 
                "getDefaultResourceGroup"
                , getDefaultResourceGroup_function_type(&::CEGUI::ImageManager::getDefaultResourceGroup)
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::CEGUI::ImageManager::getImageCount
        
            typedef ::CEGUI::uint ( ::CEGUI::ImageManager::*getImageCount_function_type )(  ) const;
            
            ImageManager_exposer.def( 
                "getImageCount"
                , getImageCount_function_type( &::CEGUI::ImageManager::getImageCount ) );
        
        }
        { //::CEGUI::ImageManager::getImagesetDefaultResourceGroup
        
            typedef ::CEGUI::String const & ( *getImagesetDefaultResourceGroup_function_type )(  );
            
            ImageManager_exposer.def( 
                "getImagesetDefaultResourceGroup"
                , getImagesetDefaultResourceGroup_function_type( &::CEGUI::ImageManager::getImagesetDefaultResourceGroup )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Returns the default resource group currently set for Imagesets.\n\
            \n\
                @return\n\
                    String describing the default resource group identifier that will be\n\
                    used when loading Imageset data.\n\
                *\n" );
        
        }
        { //::CEGUI::ImageManager::getSchemaName
        
            typedef ::CEGUI::String const & ( ::CEGUI::ImageManager::*getSchemaName_function_type )(  ) const;
            
            ImageManager_exposer.def( 
                "getSchemaName"
                , getSchemaName_function_type(&::CEGUI::ImageManager::getSchemaName)
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::CEGUI::ImageManager::isDefined
        
            typedef bool ( ::CEGUI::ImageManager::*isDefined_function_type )( ::CEGUI::String const & ) const;
            
            ImageManager_exposer.def( 
                "isDefined"
                , isDefined_function_type( &::CEGUI::ImageManager::isDefined )
                , ( bp::arg("name") ) );
        
        }
        { //::CEGUI::ImageManager::isImageTypeAvailable
        
            typedef bool ( ::CEGUI::ImageManager::*isImageTypeAvailable_function_type )( ::CEGUI::String const & ) const;
            
            ImageManager_exposer.def( 
                "isImageTypeAvailable"
                , isImageTypeAvailable_function_type( &::CEGUI::ImageManager::isImageTypeAvailable )
                , ( bp::arg("name") )
                , "*!\n\
                \n\
                    Return whether an Image subclass has been registered using the\n\
                    identifier  name.\n\
            \n\
                @param name\n\
                    String object describing the identifier to test for.\n\
            \n\
                @return\n\
                    - true if an Image subclass is registered using the identifier  name.\n\
                    - false if no Image subclass is registered using the identifier  name.\n\
                *\n" );
        
        }
        { //::CEGUI::ImageManager::loadImageset
        
            typedef void ( ::CEGUI::ImageManager::*loadImageset_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            ImageManager_exposer.def( 
                "loadImageset"
                , loadImageset_function_type( &::CEGUI::ImageManager::loadImageset )
                , ( bp::arg("filename"), bp::arg("resource_group")="" ) );
        
        }
        { //::CEGUI::ImageManager::loadImagesetFromString
        
            typedef void ( ::CEGUI::ImageManager::*loadImagesetFromString_function_type )( ::CEGUI::String const & ) ;
            
            ImageManager_exposer.def( 
                "loadImagesetFromString"
                , loadImagesetFromString_function_type( &::CEGUI::ImageManager::loadImagesetFromString )
                , ( bp::arg("source") ) );
        
        }
        { //::CEGUI::ImageManager::notifyDisplaySizeChanged
        
            typedef void ( ::CEGUI::ImageManager::*notifyDisplaySizeChanged_function_type )( ::CEGUI::Sizef const & ) ;
            
            ImageManager_exposer.def( 
                "notifyDisplaySizeChanged"
                , notifyDisplaySizeChanged_function_type( &::CEGUI::ImageManager::notifyDisplaySizeChanged )
                , ( bp::arg("size") )
                , "*!\n\
                \n\
                    Notify the ImageManager that the display size may have changed.\n\
            \n\
                @param size\n\
                    Size object describing the display resolution\n\
                *\n" );
        
        }
        { //::CEGUI::ImageManager::removeImageType
        
            typedef void ( ::CEGUI::ImageManager::*removeImageType_function_type )( ::CEGUI::String const & ) ;
            
            ImageManager_exposer.def( 
                "removeImageType"
                , removeImageType_function_type( &::CEGUI::ImageManager::removeImageType )
                , ( bp::arg("name") )
                , "*!\n\
                \n\
                    Unregister the Image subclass that was registered under the identifier\n\
                     name.\n\
            \n\
                @param name\n\
                    String object describing the identifier of the Image subclass that is to\n\
                    be unregistered.  If no such identifier is known within the system, no\n\
                    action is taken.\n\
            \n\
                \note\n\
                    You should avoid removing Image subclass types that are still in use.\n\
                    Internally a factory system is employed for the creation and deletion\n\
                    of Image based objects; if an Image subclass - and therefore it's\n\
                    factory - is removed while instances of that class are still active, it\n\
                    will not be possible to safely delete those instances.\n\
                *\n" );
        
        }
        { //::CEGUI::ImageManager::setImagesetDefaultResourceGroup
        
            typedef void ( *setImagesetDefaultResourceGroup_function_type )( ::CEGUI::String const & );
            
            ImageManager_exposer.def( 
                "setImagesetDefaultResourceGroup"
                , setImagesetDefaultResourceGroup_function_type( &::CEGUI::ImageManager::setImagesetDefaultResourceGroup )
                , ( bp::arg("resourceGroup") )
                , "*!\n\
                \n\
                    Sets the default resource group to be used when loading imageset data\n\
            \n\
                @param resourceGroup\n\
                    String describing the default resource group identifier to be used.\n\
                *\n" );
        
        }
        { //::CEGUI::XMLHandler::text
        
            typedef void ( ::CEGUI::XMLHandler::*text_function_type )( ::CEGUI::String const & ) ;
            typedef void ( ImageManager_wrapper::*default_text_function_type )( ::CEGUI::String const & ) ;
            
            ImageManager_exposer.def( 
                "text"
                , text_function_type(&::CEGUI::XMLHandler::text)
                , default_text_function_type(&ImageManager_wrapper::default_text)
                , ( bp::arg("text") ) );
        
        }
        ImageManager_exposer.staticmethod( "getImagesetDefaultResourceGroup" );
        ImageManager_exposer.staticmethod( "setImagesetDefaultResourceGroup" );
    }

}
