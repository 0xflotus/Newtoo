#pragma once

#include "HTMLElement.h"

#include "../../cssom/style/LinkStyle.h"

namespace Newtoo
{

    class HTMLStyleElement : public HTMLElement, public LinkStyle
    {
    public:

        HTMLStyleElement();

        Node* cloneNode(bool deep = false) override;

        DOMString media()                                { return getAttribute("media"); }
        void setMedia(DOMString aMedia)                  { setAttribute("media", aMedia); }

        DOMString nonce()                                { return getAttribute("nonce"); }
        void setNonce(DOMString aNonce)                  { setAttribute("nonce", aNonce); }

        DOMString type()                                { return getAttribute("type"); }
        void setType(DOMString aType)                   { setAttribute("type", aType); }

        HTMLStyleElement(HTMLStyleElement& reference, bool deep)
            :HTMLElement(reference, deep),
             LinkStyle(reference.mSheet)
        {}

    private:

    };

}