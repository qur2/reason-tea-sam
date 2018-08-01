import node_resolve from 'rollup-plugin-node-resolve'
import livereload from 'rollup-plugin-livereload'
import serve from 'rollup-plugin-serve'

export default {
  input: './lib/es6/src/main.js',
  output: {
    file: './dev/main.js',
    format: 'iife',
  },
  plugins: [
    node_resolve({
      module: true,
      browser: true,
    }),
    serve('dev'),
    livereload(),
  ],
  name: 'starter'
}
