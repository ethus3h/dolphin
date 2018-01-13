// This file is generated by kconfig_compiler_kf5 from dolphin_detailsmodesettings.kcfg.
// All changes you do to this file will be lost.
#ifndef DETAILSMODESETTINGS_H
#define DETAILSMODESETTINGS_H

#include <kconfigskeleton.h>
#include <QCoreApplication>
#include <QDebug>

#include <kiconloader.h>
#include <QFontDatabase>
class DetailsModeSettings : public KConfigSkeleton
{
  public:

    static DetailsModeSettings *self();
    ~DetailsModeSettings();

    /**
      Set Font family
    */
    static
    void setFontFamily( const QString & v )
    {
      if (!self()->isImmutable( QStringLiteral( "FontFamily" ) ))
        self()->mFontFamily = v;
    }

    /**
      Get Font family
    */
    static
    QString fontFamily()
    {
      return self()->mFontFamily;
    }

    /**
      Set Use system font
    */
    static
    void setUseSystemFont( bool v )
    {
      if (!self()->isImmutable( QStringLiteral( "UseSystemFont" ) ))
        self()->mUseSystemFont = v;
    }

    /**
      Get Use system font
    */
    static
    bool useSystemFont()
    {
      return self()->mUseSystemFont;
    }

    /**
      Set Font size
    */
    static
    void setFontSize( double v )
    {
      if (!self()->isImmutable( QStringLiteral( "FontSize" ) ))
        self()->mFontSize = v;
    }

    /**
      Get Font size
    */
    static
    double fontSize()
    {
      return self()->mFontSize;
    }

    /**
      Set Italic
    */
    static
    void setItalicFont( bool v )
    {
      if (!self()->isImmutable( QStringLiteral( "ItalicFont" ) ))
        self()->mItalicFont = v;
    }

    /**
      Get Italic
    */
    static
    bool italicFont()
    {
      return self()->mItalicFont;
    }

    /**
      Set Font weight
    */
    static
    void setFontWeight( int v )
    {
      if (!self()->isImmutable( QStringLiteral( "FontWeight" ) ))
        self()->mFontWeight = v;
    }

    /**
      Get Font weight
    */
    static
    int fontWeight()
    {
      return self()->mFontWeight;
    }

    /**
      Set Icon size
    */
    static
    void setIconSize( int v )
    {
      if (!self()->isImmutable( QStringLiteral( "IconSize" ) ))
        self()->mIconSize = v;
    }

    /**
      Get Icon size
    */
    static
    int iconSize()
    {
      return self()->mIconSize;
    }

    /**
      Set Preview size
    */
    static
    void setPreviewSize( int v )
    {
      if (!self()->isImmutable( QStringLiteral( "PreviewSize" ) ))
        self()->mPreviewSize = v;
    }

    /**
      Get Preview size
    */
    static
    int previewSize()
    {
      return self()->mPreviewSize;
    }

    /**
      Set Position of columns
    */
    static
    void setColumnPositions( const QList<int> & v )
    {
      if (!self()->isImmutable( QStringLiteral( "ColumnPositions" ) ))
        self()->mColumnPositions = v;
    }

    /**
      Get Position of columns
    */
    static
    QList<int> columnPositions()
    {
      return self()->mColumnPositions;
    }

    /**
      Set Expandable folders
    */
    static
    void setExpandableFolders( bool v )
    {
      if (!self()->isImmutable( QStringLiteral( "ExpandableFolders" ) ))
        self()->mExpandableFolders = v;
    }

    /**
      Get Expandable folders
    */
    static
    bool expandableFolders()
    {
      return self()->mExpandableFolders;
    }

  protected:
    DetailsModeSettings();
    friend class DetailsModeSettingsHelper;


    // DetailsMode
    QString mFontFamily;
    bool mUseSystemFont;
    double mFontSize;
    bool mItalicFont;
    int mFontWeight;
    int mIconSize;
    int mPreviewSize;
    QList<int> mColumnPositions;
    bool mExpandableFolders;

  private:
};

#endif

