// This file is generated by kconfig_compiler_kf5 from dolphin_folderspanelsettings.kcfg.
// All changes you do to this file will be lost.
#ifndef FOLDERSPANELSETTINGS_H
#define FOLDERSPANELSETTINGS_H

#include <kconfigskeleton.h>
#include <QCoreApplication>
#include <QDebug>

class FoldersPanelSettings : public KConfigSkeleton
{
  public:

    static FoldersPanelSettings *self();
    ~FoldersPanelSettings();

    /**
      Set Hidden files shown
    */
    static
    void setHiddenFilesShown( bool v )
    {
      if (!self()->isImmutable( QStringLiteral( "HiddenFilesShown" ) ))
        self()->mHiddenFilesShown = v;
    }

    /**
      Get Hidden files shown
    */
    static
    bool hiddenFilesShown()
    {
      return self()->mHiddenFilesShown;
    }

    /**
      Set Limit folders panel to home directory if inside home
    */
    static
    void setLimitFoldersPanelToHome( bool v )
    {
      if (!self()->isImmutable( QStringLiteral( "LimitFoldersPanelToHome" ) ))
        self()->mLimitFoldersPanelToHome = v;
    }

    /**
      Get Limit folders panel to home directory if inside home
    */
    static
    bool limitFoldersPanelToHome()
    {
      return self()->mLimitFoldersPanelToHome;
    }

    /**
      Set Automatic scrolling
    */
    static
    void setAutoScrolling( bool v )
    {
      if (!self()->isImmutable( QStringLiteral( "AutoScrolling" ) ))
        self()->mAutoScrolling = v;
    }

    /**
      Get Automatic scrolling
    */
    static
    bool autoScrolling()
    {
      return self()->mAutoScrolling;
    }

  protected:
    FoldersPanelSettings();
    friend class FoldersPanelSettingsHelper;


    // FoldersPanel
    bool mHiddenFilesShown;
    bool mLimitFoldersPanelToHome;
    bool mAutoScrolling;

  private:
};

#endif

