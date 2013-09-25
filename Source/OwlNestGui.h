/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_894D3EBAC9C694FA__
#define __JUCE_HEADER_894D3EBAC9C694FA__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "Settings.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class OwlNestGui  : public Component,
                    public Value::Listener,
                    public ComboBoxListener,
                    public ButtonListener,
                    public SliderListener
{
public:
    //==============================================================================
    OwlNestGui (OwlNestSettings& settings, AudioDeviceManager& dm, Value& updateGui);
    ~OwlNestGui();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void settingsChanged();
    void valueChanged(juce::Value &value);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);
    void buttonClicked (Button* buttonThatWasClicked);
    void sliderValueChanged (Slider* sliderThatWasMoved);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    OwlNestSettings& theSettings;
    AudioDeviceManager& theDm;
    ScopedPointer<AudioDeviceSelectorComponent> audioSelector;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<ComboBox> samplingRateComboBox;
    ScopedPointer<Label> samplingRateLabel;
    ScopedPointer<TextButton> loadButton;
    ScopedPointer<Slider> leftGainSlider;
    ScopedPointer<Label> leftGainLabel;
    ScopedPointer<TextButton> saveButton;
    ScopedPointer<TextButton> dfuButton;
    ScopedPointer<ToggleButton> bypassButton;
    ScopedPointer<ToggleButton> swapLRButton;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (OwlNestGui)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_894D3EBAC9C694FA__
