
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JMenuBar__
#define __javax_swing_JMenuBar__

#pragma interface

#include <javax/swing/JComponent.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
        class Graphics;
        class Insets;
      namespace event
      {
          class KeyEvent;
          class MouseEvent;
      }
    }
  }
  namespace javax
  {
    namespace accessibility
    {
        class AccessibleContext;
    }
    namespace swing
    {
        class JMenu;
        class JMenuBar;
        class KeyStroke;
        class MenuElement;
        class MenuSelectionManager;
        class SingleSelectionModel;
      namespace plaf
      {
          class MenuBarUI;
      }
    }
  }
}

class javax::swing::JMenuBar : public ::javax::swing::JComponent
{

public:
  JMenuBar();
  virtual ::javax::swing::JMenu * add(::javax::swing::JMenu *);
  virtual void addNotify();
  virtual ::javax::accessibility::AccessibleContext * getAccessibleContext();
  virtual ::java::awt::Component * getComponent();
  virtual ::java::awt::Component * getComponentAtIndex(jint);
  virtual jint getComponentIndex(::java::awt::Component *);
  virtual ::javax::swing::JMenu * getHelpMenu();
  virtual ::java::awt::Insets * getMargin();
  virtual ::javax::swing::JMenu * getMenu(jint);
  virtual jint getMenuCount();
  virtual ::javax::swing::SingleSelectionModel * getSelectionModel();
  virtual JArray< ::javax::swing::MenuElement * > * getSubElements();
  virtual ::javax::swing::plaf::MenuBarUI * getUI();
  virtual ::java::lang::String * getUIClassID();
  virtual jboolean isBorderPainted();
  virtual jboolean isSelected();
  virtual void menuSelectionChanged(jboolean);
public: // actually protected
  virtual void paintBorder(::java::awt::Graphics *);
  virtual ::java::lang::String * paramString();
public:
  virtual void processKeyEvent(::java::awt::event::KeyEvent *, JArray< ::javax::swing::MenuElement * > *, ::javax::swing::MenuSelectionManager *);
public: // actually protected
  virtual jboolean processKeyBinding(::javax::swing::KeyStroke *, ::java::awt::event::KeyEvent *, jint, jboolean);
public: // actually package-private
  static jboolean processKeyBindingHelper(::javax::swing::MenuElement *, ::javax::swing::KeyStroke *, ::java::awt::event::KeyEvent *, jint, jboolean);
public:
  virtual void processMouseEvent(::java::awt::event::MouseEvent *, JArray< ::javax::swing::MenuElement * > *, ::javax::swing::MenuSelectionManager *);
  virtual void removeNotify();
  virtual void setBorderPainted(jboolean);
  virtual void setHelpMenu(::javax::swing::JMenu *);
  virtual void setMargin(::java::awt::Insets *);
  virtual void setSelected(::java::awt::Component *);
  virtual void setSelectionModel(::javax::swing::SingleSelectionModel *);
  virtual void setUI(::javax::swing::plaf::MenuBarUI *);
  virtual void updateUI();
private:
  static const jlong serialVersionUID = -8191026883931977036LL;
  ::javax::swing::SingleSelectionModel * __attribute__((aligned(__alignof__( ::javax::swing::JComponent)))) selectionModel;
  jboolean borderPainted;
  ::java::awt::Insets * margin;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_JMenuBar__
