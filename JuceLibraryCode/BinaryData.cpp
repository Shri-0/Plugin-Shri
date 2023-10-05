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
"\tThis file contains the basic startup code for a JUCE application.\r\n"
"\r\n"
"  ==============================================================================\r\n"
"*/\r\n"
"\r\n"
"// #include <JuceHeader.h>\r\n"
"#include <JuceHeader.h>\r\n"
"\r\n"
"#include \"MainComponent.h\"\r\n"
"\r\n"
"//==============================================================================\r\n"
"class PluginShriApplication : public juce::JUCEApplication\r\n"
"{\r\n"
"public:\r\n"
"\t//==============================================================================\r\n"
"\tPluginShriApplication() {}\r\n"
"\r\n"
"\tconst juce::String getApplicationName() override { return ProjectInfo::projectName; }\r\n"
"\tconst juce::String getApplicationVersion() override { return ProjectInfo::versionString; }\r\n"
"\tbool moreThanOneInstanceAllowed() override { return true; }\r\n"
"\r\n"
"\t//==============================================================================\r\n"
"\tvoid initialise(const juce::String &commandLine) override\r\n"
"\t{\r\n"
"\t\t// This method is where you should put your application's initialisation code..\r\n"
"\r\n"
"\t\tmainWindow.reset(new MainWindow(getApplicationName()));\r\n"
"\t}\r\n"
"\r\n"
"\tvoid shutdown() override\r\n"
"\t{\r\n"
"\t\t// Add your application's shutdown code here..\r\n"
"\r\n"
"\t\tmainWindow = nullptr; // (deletes our window)\r\n"
"\t}\r\n"
"\r\n"
"\t//==============================================================================\r\n"
"\tvoid systemRequestedQuit() override\r\n"
"\t{\r\n"
"\t\t// This is called when the app is being asked to quit: you can ignore this\r\n"
"\t\t// request and let the app carry on running, or call quit() to allow the app to close.\r\n"
"\t\tquit();\r\n"
"\t}\r\n"
"\r\n"
"\tvoid anotherInstanceStarted(const juce::String &commandLine) override\r\n"
"\t{\r\n"
"\t\t// When another instance of the app is launched while this one is running,\r\n"
"\t\t// this method is invoked, and the commandLine parameter tells you what\r\n"
"\t\t// the other instance's command-line arguments were.\r\n"
"\t}\r\n"
"\r\n"
"\t//==============================================================================\r\n"
"\t/*\r\n"
"\t\tThis class implements the desktop window that contains an instance of\r\n"
"\t\tour MainComponent class.\r\n"
"\t*/\r\n"
"\tclass MainWindow : public juce::DocumentWindow\r\n"
"\t{\r\n"
"\tpublic:\r\n"
"\t\tMainWindow(juce::String name)\r\n"
"\t\t\t: DocumentWindow(name,\r\n"
"\t\t\t\t\t\t\t juce::Desktop::getInstance().getDefaultLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId),\r\n"
"\t\t\t\t\t\t\t DocumentWindow::allButtons)\r\n"
"\t\t{\r\n"
"\t\t\tsetUsingNativeTitleBar(true);\r\n"
"\t\t\tsetContentOwned(new MainComponent(), true);\r\n"
"\r\n"
"#if JUCE_IOS || JUCE_ANDROID\r\n"
"\t\t\tsetFullScreen(true);\r\n"
"#else\r\n"
"\t\t\tsetResizable(true, true);\r\n"
"\t\t\tcentreWithSize(getWidth(), getHeight());\r\n"
"#endif\r\n"
"\r\n"
"\t\t\tsetVisible(true);\r\n"
"\t\t}\r\n"
"\r\n"
"\t\tvoid closeButtonPressed() override\r\n"
"\t\t{\r\n"
"\t\t\t// This is called when the user tries to close this window. Here, we'll just\r\n"
"\t\t\t// ask the app to quit when this happens, but you can change this to do\r\n"
"\t\t\t// whatever you need.\r\n"
"\t\t\tJUCEApplication::getInstance()->systemRequestedQuit();\r\n"
"\t\t}\r\n"
"\r\n"
"\t\t/* Note: Be careful if you override any DocumentWindow methods - the base\r\n"
"\t\t   class uses a lot of them, so by overriding you might break its functionality.\r\n"
"\t\t   It's best to do all your work in your content component instead, but if\r\n"
"\t\t   you really have to override any DocumentWindow methods, make sure your\r\n"
"\t\t   subclass also calls the superclass's method.\r\n"
"\t\t*/\r\n"
"\r\n"
"\tprivate:\r\n"
"\t\tJUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainWindow)\r\n"
"\t};\r\n"
"\r\n"
"private:\r\n"
"\tstd::unique_ptr<MainWindow> mainWindow;\r\n"
"};\r\n"
"\r\n"
"//==============================================================================\r\n"
"// This macro generates the main() routine that launches the app.\r\n"
"START_JUCE_APPLICATION(PluginShriApplication)\r\n";

const char* Main_cpp = (const char*) temp_binary_data_0;

//================== MainComponent.h ==================
static const unsigned char temp_binary_data_1[] =
"#pragma once\r\n"
"\r\n"
"#include \"JuceHeader.h\"\r\n"
"//#include \"JuceHeader.h\"\r\n"
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
        case 0x035e963d:  numBytes = 3615; return Main_cpp;
        case 0xe6c09a0d:  numBytes = 856; return MainComponent_h;
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
