# Basic Reason Template

This is an experiment for [SAM pattern](https://sam.js.org/) on [bucklescript-TEA](https://github.com/OvermindDL1/bucklescript-tea), written in [ReasonML](https://reasonml.github.io/).

# Organisation

* The reasonml code goes into _src/*.re_
* The _release_ folder contains an _index.html_ and rollup bundles your js here in _main.js_

# Getting started

* copy or clone this repository
* change the names in package.json
* for consistency, also change the name in _bsconfig.json_
* in the _rollup.config.js_ you can change the name of the output, you also have to change this name in de _index.html_

## Install

```
npm install
```

## Build

```
npm run build
```

## Watch

```
npm run watch
```

## Credits
- [bucklescript-tea-sam](https://github.com/supersubwoofer/bucklescript-tea-sam) by supersubwoofer
- [Bucklescript-TEA](https://github.com/OvermindDL1/bucklescript-tea) by OvermindDL1
- [Bucklescript-TEA starter kit](https://github.com/tcoopman/bucklescript-tea-starter-kit) by Thomas Coopman
- [SAM pattern](http://sam.js.org/) by Jean-Jacques Dubray
- [TEA - The Elm Architecture](http://guide.elm-lang.org/architecture/index.html) by Evan Czaplicki