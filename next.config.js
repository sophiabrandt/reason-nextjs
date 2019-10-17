const withTM = require('next-transpile-modules');

module.exports = withTM({
  pageExtensions: ['jsx', 'js'],
  transpileModules: ['bs-platform']
});
