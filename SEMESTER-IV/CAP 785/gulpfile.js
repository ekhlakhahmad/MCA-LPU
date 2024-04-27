const gulp = require('gulp');
const cleanCSS = require('gulp-clean-css');
const jsuglify= require('gulp-uglify');
// Task to minify CSS files
gulp.task('minify-css', () => {
return gulp.src('src/css/*.css') // Path to your CSS files
.pipe(cleanCSS()) // Minify the CSS files
.pipe(gulp.dest('dist/css')); // Destination folder for the minified CSS files
});

gulp.task('minify-js', () => {
    return gulp.src('src/js/*.js') // Path to your CSS files
    .pipe(jsuglify()) // Minify the CSS files
    .pipe(gulp.dest('dist/js')); // Destination folder for the minified CSS files
});

// Default task
gulp.task('default', gulp.parallel('minify-css','minify-js'));