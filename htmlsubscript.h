#ifndef HTMLSUBSCRIPT_H
#define HTMLSUBSCRIPT_H

#include <QWidget>
#include "domelement.h"

/**
 * @brief Represents the <sub> HTML tag.
 */
class HtmlSubscript : public DomElement
{
public:
    HtmlSubscript(QWidget *parent = 0);
    int getType();
    QString toHtml();
};

#endif // HTMLSUBSCRIPT_H
