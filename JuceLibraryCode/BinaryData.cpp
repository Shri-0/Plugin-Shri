/* ==================================== JUCER_BINARY_RESOURCE ====================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#include <cstring>

namespace BinaryData
{

//================== Main.cpp ==================
static const unsigned char temp_binary_data_0[] =
"/*\r\n"
"  ==============================================================================\r\n"
"\r\n"
"    This file contains the basic startup code for a JUCE application.\r\n"
"\r\n"
"  ==============================================================================\r\n"
"*/\r\n"
"\r\n"
"#include <JuceHeader.h>\r\n"
"#include \"MainComponent.h\"\r\n"
"\r\n"
"//==============================================================================\r\n"
"class PluginShriApplication  : public juce::JUCEApplication\r\n"
"{\r\n"
"public:\r\n"
"    //==============================================================================\r\n"
"    PluginShriApplication() {}\r\n"
"\r\n"
"    const juce::String getApplicationName() override       { return ProjectInfo::projectName; }\r\n"
"    const juce::String getApplicationVersion() override    { return ProjectInfo::versionString; }\r\n"
"    bool moreThanOneInstanceAllowed() override             { return true; }\r\n"
"\r\n"
"    //==============================================================================\r\n"
"    void initialise (const juce::String& commandLine) override\r\n"
"    {\r\n"
"        // This method is where you should put your application's initialisation code..\r\n"
"\r\n"
"        mainWindow.reset (new MainWindow (getApplicationName()));\r\n"
"    }\r\n"
"\r\n"
"    void shutdown() override\r\n"
"    {\r\n"
"        // Add your application's shutdown code here..\r\n"
"\r\n"
"        mainWindow = nullptr; // (deletes our window)\r\n"
"    }\r\n"
"\r\n"
"    //==============================================================================\r\n"
"    void systemRequestedQuit() override\r\n"
"    {\r\n"
"        // This is called when the app is being asked to quit: you can ignore this\r\n"
"        // request and let the app carry on running, or call quit() to allow the app to close.\r\n"
"        quit();\r\n"
"    }\r\n"
"\r\n"
"    void anotherInstanceStarted (const juce::String& commandLine) override\r\n"
"    {\r\n"
"        // When another instance of the app is launched while this one is running,\r\n"
"        // this method is invoked, and the commandLine parameter tells you what\r\n"
"        // the other instance's command-line arguments were.\r\n"
"    }\r\n"
"\r\n"
"    //==============================================================================\r\n"
"    /*\r\n"
"        This class implements the desktop window that contains an instance of\r\n"
"        our MainComponent class.\r\n"
"    */\r\n"
"    class MainWindow    : public juce::DocumentWindow\r\n"
"    {\r\n"
"    public:\r\n"
"        MainWindow (juce::String name)\r\n"
"            : DocumentWindow (name,\r\n"
"                              juce::Desktop::getInstance().getDefaultLookAndFeel()\r\n"
"                                                          .findColour (juce::ResizableWindow::backgroundColourId),\r\n"
"                              DocumentWindow::allButtons)\r\n"
"        {\r\n"
"            setUsingNativeTitleBar (true);\r\n"
"            setContentOwned (new MainComponent(), true);\r\n"
"\r\n"
"           #if JUCE_IOS || JUCE_ANDROID\r\n"
"            setFullScreen (true);\r\n"
"           #else\r\n"
"            setResizable (true, true);\r\n"
"            centreWithSize (getWidth(), getHeight());\r\n"
"           #endif\r\n"
"\r\n"
"            setVisible (true);\r\n"
"        }\r\n"
"\r\n"
"        void closeButtonPressed() override\r\n"
"        {\r\n"
"            // This is called when the user tries to close this window. Here, we'll just\r\n"
"            // ask the app to quit when this happens, but you can change this to do\r\n"
"            // whatever you need.\r\n"
"            JUCEApplication::getInstance()->systemRequestedQuit();\r\n"
"        }\r\n"
"\r\n"
"        /* Note: Be careful if you override any DocumentWindow methods - the base\r\n"
"           class uses a lot of them, so by overriding you might break its functionality.\r\n"
"           It's best to do all your work in your content component instead, but if\r\n"
"           you really have to override any DocumentWindow methods, make sure your\r\n"
"           subclass also calls the superclass's method.\r\n"
"        */\r\n"
"\r\n"
"    private:\r\n"
"        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainWindow)\r\n"
"    };\r\n"
"\r\n"
"private:\r\n"
"    std::unique_ptr<MainWindow> mainWindow;\r\n"
"};\r\n"
"\r\n"
"//==============================================================================\r\n"
"// This macro generates the main() routine that launches the app.\r\n"
"START_JUCE_APPLICATION (PluginShriApplication)\r\n";

const char* Main_cpp = (const char*) temp_binary_data_0;

//================== MainComponent.h ==================
static const unsigned char temp_binary_data_1[] =
"#pragma once\r\n"
"\r\n"
"#include <JuceHeader.h>\r\n"
"\r\n"
"//==============================================================================\r\n"
"/*\r\n"
"    This component lives inside our window, and this is where you should put all\r\n"
"    your controls and content.\r\n"
"*/\r\n"
"class MainComponent  : public juce::Component\r\n"
"{\r\n"
"public:\r\n"
"    //==============================================================================\r\n"
"    MainComponent();\r\n"
"    ~MainComponent() override;\r\n"
"\r\n"
"    //==============================================================================\r\n"
"    void paint (juce::Graphics&) override;\r\n"
"    void resized() override;\r\n"
"\r\n"
"private:\r\n"
"    //==============================================================================\r\n"
"    // Your private member variables go here...\r\n"
"\r\n"
"\r\n"
"    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)\r\n"
"};\r\n";

const char* MainComponent_h = (const char*) temp_binary_data_1;

//================== MainComponent.cpp ==================
static const unsigned char temp_binary_data_2[] =
"#include \"MainComponent.h\"\n"
"\n"
"MainComponent::MainComponent()\n"
"{\n"
"}\n"
"\n"
"MainComponent::~MainComponent()\n"
"{\n"
"}\n"
"\n"
"void MainComponent::paint(juce::Graphics &)\n"
"{\n"
"}\n"
"\n"
"void MainComponent::resized()\n"
"{\n"
"}\n";

const char* MainComponent_cpp = (const char*) temp_binary_data_2;


const char* getNamedResource (const char* resourceNameUTF8, int& numBytes);
const char* getNamedResource (const char* resourceNameUTF8, int& numBytes)
{
    unsigned int hash = 0;

    if (resourceNameUTF8 != nullptr)
        while (*resourceNameUTF8 != 0)
            hash = 31 * hash + (unsigned int) *resourceNameUTF8++;

    switch (hash)
    {
        case 0x035e963d:  numBytes = 4098; return Main_cpp;
        case 0xe6c09a0d:  numBytes = 829; return MainComponent_h;
        case 0x39024608:  numBytes = 184; return MainComponent_cpp;
        default: break;
    }

    numBytes = 0;
    return nullptr;
}

const char* namedResourceList[] =
{
    "Main_cpp",
    "MainComponent_h",
    "MainComponent_cpp"
};

const char* originalFilenames[] =
{
    "Main.cpp",
    "MainComponent.h",
    "MainComponent.cpp"
};

const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8)
{
    for (unsigned int i = 0; i < (sizeof (namedResourceList) / sizeof (namedResourceList[0])); ++i)
        if (strcmp (namedResourceList[i], resourceNameUTF8) == 0)
            return originalFilenames[i];

    return nullptr;
}

}
