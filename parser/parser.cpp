#include "parser.hpp"

void pars(string html) {

  HTML::ParserDom parser;
  tree < HTML::Node > dom = parser.parseTree(html);
  tree < HTML::Node > ::iterator it = dom.begin();
  tree < HTML::Node > ::iterator end = dom.end();

  for (; it != end; ++it) {
    if (strcasecmp(it -> tagName().c_str(), "A") == 0) {
      it -> parseAttributes();
      cout <<it->attribute("href").second << endl;
    }
  }

  it = dom.begin();
  end = dom.end();

  
}
