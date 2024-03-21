const mongoose = require('mongoose');

const { Schema } = mongoose;


const movieSchema = new Schema({
  title: { type: String, required: true },
  year: { type: Number, required: true },
  plot: { type: String, required: true },
  genre: [{ type: String, required: true }],
  cast: [{
    actor: { type: String, required: true },
    character: { type: String, required: true },
  }],
  directors: [{ type: String, required: true }],
  writers: [{ type: String, required: true }],
  ratings: [{
    source: { type: String, required: true },
    value: { type: Number, required: true },
  }],
  languages: [{ type: String, required: true }],
  countries: [{ type: String, required: true }],
  runtime: { type: Number, required: true },
  released: { type: Date, required: true },
}, { timestamps: true });

const Movie = mongoose.model('Movie', movieSchema);

module.exports = {
  Movie,
};
